# NVIDIA Linux Open GPU Kernel Module Source

This is the source release of the NVIDIA Linux open GPU kernel modules,
version 530.41.03.

This fork is not perfect, but at least something to start from.

The primary cause was that nvidia-open didn't want to build (and then run)
properly on my custom kernel. After starting walking through the code, I
realized there's a ton of room for fixes and improvement, so here I am.

## Changes so far

* The driver was completely and properly integrated into Kbuild, in the first
place those two modules under src directory, including C++ source files. Now
they, as well as conftest, use generic CFLAGS, which means:

* SLS, IBT, LTO, struct randomization, used register zeroing -- everything
upstream kernel supports is now supported by the modules as well. Plus,

* fixes all over the place to be able to build with all the upstream compiler
warning flags, including those from Clang. Including conftest, so now random
tests don't fail due to some compiler warning.

* ClangCFI (KCFI) is now supported as well. Addressed all of the places where
callback casts or implicit int-to-enum were used (hello RTTI authors, your
code is "fucking fucked beyond belief" (c)).

* The folder is ready for integrating into the kernel tree (in terms of the
structure, not code quality obviously). Just drop it as drivers/gpu/drm/nvidia
and wire it up in drivers/gpu/drm/{Kconfig,Makefile}. It's being tested
primarily as a part of the kernel, not as a standalone module.

## Disclaimer

This is guaranteed to work only on the latest stable kernel, older versions
including official LTSes are out of scope.

## Plans

As mentioned above, there's an infinitely big room for further fixes and
improvements, so I'll be doing that time to time. Nothing outstanding, just
some local stuff that could fit into 1-2 hrs a week.

Hope NVIDIA will at least try to sort their code out and make it
upstreamable, but that won't happen for sure in any time soon.
