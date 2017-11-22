# 1. KEEP UBUNTU OR DEBIAN UP TO DATE

sudo apt-get -y update
sudo apt-get -y upgrade
sudo apt-get -y dist-upgrade
sudo apt-get -y autoremove

# Build tools:
sudo apt-get install -y build-essential cmake

# GUI (if you want to use GTK instead of Qt, replace 'qt5-default' with 'libgtkglext1-dev' and remove '-DWITH_QT=ON' option in CMake):
sudo apt-get install -y qt5-default libvtk6-dev

# Media I/O:
sudo apt-get install -y zlib1g-dev libjpeg-dev libwebp-dev libpng-dev libtiff5-dev libjasper-dev libopenexr-dev libgdal-dev

# Video I/O:
sudo apt-get install -y libdc1394-22-dev libavcodec-dev libavformat-dev libswscale-dev libtheora-dev libvorbis-dev libxvidcore-dev libx264-dev yasm libopencore-amrnb-dev libopencore-amrwb-dev libv4l-dev libxine2-dev

# Parallelism and linear algebra libraries:
sudo apt-get install -y libtbb-dev libeigen3-dev

# Python:
sudo apt-get install -y python-dev python-tk python-numpy python3-dev python3-tk python3-numpy

# Java:
sudo apt-get install -y ant default-jdk

# Documentation:
sudo apt-get install -y doxygen

sudo apt-get install -y unzip wget

cd ~/Downloads

wget -O opencv-3.3.1.zip https://github.com/opencv/opencv/archive/3.3.1.zip
wget -O opencv_contrib-3.3.1.zip https://github.com/opencv/opencv_contrib/archive/3.3.1.zip
unzip opencv-3.3.1.zip && unzip opencv_contrib-3.3.1.zip

chmod 777 -R opencv-3.3.1 && chmod 777 -R opencv_contrib-3.3.1

sudo mv opencv_contrib-3.3.1 opencv-3.3.1


cd opencv-3.3.1

mkdir build &&
cd    build &&

cmake -DCMAKE_INSTALL_PREFIX=/usr      \
      -DCMAKE_BUILD_TYPE=Release       \
      -DENABLE_CXX11=ON                \
      -DBUILD_PERF_TESTS=OFF           \
      -DWITH_XINE=ON                   \
      -DBUILD_TESTS=OFF                \
      -DENABLE_PRECOMPILED_HEADERS=OFF \
      -DCMAKE_SKIP_RPATH=ON            \
      -DOPENCV_EXTRA_MODULES_PATH=../opencv_contrib-3.3.1/modules \
      -D BUILD_EXAMPLES=ON \
      -DBUILD_WITH_DEBUG_INFO=OFF      \
      -Wno-dev  ..                     &&
make -j 8

sudo make install
sudo ldconfig
