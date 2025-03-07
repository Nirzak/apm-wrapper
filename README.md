# wrapper
A tool to decrypt Apple Music's songs. An active subscription is still needed.

Only support arm64. for x86_64 support check zhaarey's repo here: https://github.com/zhaarey/wrapper

# Install
Get the pre-built version from this project's Releases. 

# Docker
Available for arm64. Need to download prebuilt version from releases or actions.

Build image: `docker build --tag wrapper .`

Login: `docker run -v ./rootfs/data:/app/rootfs/data -p 10020:10020 -e args="-L username:password -F -H 0.0.0.0" wrapper`

Run: `docker run -v ./rootfs/data:/app/rootfs/data -p 10020:10020 -e args="-H 0.0.0.0" wrapper`

# Usage
```
Usage: wrapper [OPTION]...

  -h, --help              Print help and exit
  -V, --version           Print version and exit
  -H, --host=STRING         (default=`127.0.0.1')
  -D, --decrypt-port=INT    (default=`10020')
  -M, --m3u8-port=INT       (default=`20020')
  -P, --proxy=STRING        (default=`')
  -L, --login=STRING        (username:password)
  -F, --code-from-file      (default=off)
```

# Special thanks
- Anonymous, for providing the original version of this project and the legacy Frida decryption method.
- chocomint, for providing support for arm64 arch.
