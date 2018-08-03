openssl aes-256-cbc -iv $iv_hex -K $key_hex -in upload_key_encrypted -out upload_key -d
chmod 600 upload_key
eval $(ssh-agent -s) > /dev/null
ssh-add upload_key > /dev/null
envsubst < upload_sftp > upload_sftp_subst
if [[ "$TRAVIS_OS_NAME" == "osx" ]]; then
  export STRICT_CHECK='-oStrictHostKeyChecking=accept-new'
fi
sftp -v $STRICT_CHECK -b upload_sftp_subst -i upload_key -P 2222 $sftp_user
eval $(ssh-agent -k) > /dev/null
rm upload_key
