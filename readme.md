# introduce
this is exp for c++/c  
进入子文件夹，在windows基于mingw32，执行如下命令获取可执行文件：  
```
cd ./xxx
mkdir build ; cd build
remove-item -recurse -force "./*"  # 删除已存在的build中的内容  
cmake -G   "MinGW Makefiles" ..  
mingw32-make
```