if [[ "$TRAVIS_OS_NAME" == "linux" ]]; then
  sudo apt-add-repository ppa:wpilib/toolchain -y
  ls /etc/apt/sources.list.d
  sudo apt-get update -o Dir::Etc::sourcelist=/etc/apt/sources.list.d/wpilib-toolchain-trusty.list -q
  sudo apt-get install frc-toolchain -y
else # OS X
  # Link envsubst
  brew link --force gettext
fi
