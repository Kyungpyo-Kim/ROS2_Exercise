cd /usr/src
sudo mv ~/Downloads/linuxcan.tar.gz .
sudo tar xvzf linuxcan.tar.gz
cd linuxcan
make
sudo make install
sudo apt-get install ros-indigo-can-msgs ## can_msgs error 해결방법
cd canlib
make
sudo make install
cd ..
cd common
make
sudo ./installscript.sh