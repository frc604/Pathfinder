if [[ "$TRAVIS_OS_NAME" == "linux" ]]; then
  sudo apt-add-repository ppa:wpilib/toolchain -y
  sudo apt-get update -q
  sudo apt-get install frc-toolchain -y
else # OS X
  # Link envsubst
  brew link --force gettext
fi
