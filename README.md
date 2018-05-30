## Summary
 - Cache Timing Analysis Framework via LLVM transformation (the paper is under submission in ASE 2018)
 - CANAL makes C code cache-verifiable through all kinds of LLVM-based verification tools
 - CANAL produces LLVM-bitcode which can be ran as a simulator or verified with LLVM-based verification tools.


## Contributor
 - Chungha Sung (chunghas[@]usc[dot]edu)
 - Brandon Paulson (bpaulsen[@]usc[dot]edu)
 - Chao Wang (wang626[@]usc[dot]edu)


## Depednecy
 - It has been tested under Clang/LLVM 3.4.0 and 3.8.0
 - (optional) Klee (https://klee.github.io/)
 - (optional) SMACK (https://github.com/smackers/smack)
 - (optional) crab-llvm (https://github.com/seahorn/crab-llvm)

## Build
 - Change environment paths appropriately for the test (check bin/common.sh)
 - Under ``src``, type ``mkdir build``.
 - Then, ``cmake ../`` and ``make`` to build (under assumption cmake and llvm are installed)
 - Or, by running ``buildPass.sh`` under each bench directory you can build CANAL.
