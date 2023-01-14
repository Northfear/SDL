
# Simple DirectMedia Layer (SDL) Version 2.0 — vitaGL backend

https://www.libsdl.org/

Compile using:

```
git clone git@github.com:Northfear/SDL.git
cd SDL
git checkout vitagl
cmake -S. -Bbuild -DCMAKE_TOOLCHAIN_FILE=${VITASDK}/share/vita.toolchain.cmake -DCMAKE_BUILD_TYPE=Release -DVIDEO_VITA_VGL=ON
cmake --build build -- -j$(nproc)
cmake --install build
```
