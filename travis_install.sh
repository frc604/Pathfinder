if [[ "$TRAVIS_OS_NAME" == "linux" ]]; then
  sudo apt-add-repository ppa:wpilib/toolchain -y
  sudo apt-get update -q
  sudo apt-get install frc-toolchain -y
else # OS X
  # Install envsubst
  brew install getteext
  brew link --force gettext
fi
