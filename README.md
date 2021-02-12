This repo contains a quick and dirty test for [glibc_version_header](https://github.com/wheybags/glibc_version_header).

The GitHub Actions workflow will build the test programs on Ubuntu 20.04 and then run them on older versions of Ubuntu to show that they work/fail with/without glibc_version_header.

You can build locally by running `build.sh`. You can confirm which versions of glibc functions got used via `objdump -T test-[no]downlevel`. (`expf` in particular is expected to be different.)
