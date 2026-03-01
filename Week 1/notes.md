# Week 1 — Hello World in C

## Compiling

```bash
gcc -Wall -o helloworld 0_helloworld.c
```

Or with clang (C11 standard):

```bash
clang 0_helloworld.c -o helloworld --std=c11
```

## Running

```bash
./helloworld
```

## Adding to PATH (run from anywhere)

```bash
PATH="$PATH:/path/to/Week 1"
helloworld
```

## Timing comparison — C vs Python

```bash
time (clang 0_helloworld.c -o helloworld --std=c11 && ./helloworld)
time (python3 -c 'print("Hello, World!", end="")')
time (./helloworld)
```

### Results

```
# compile + run (C)
Hello, World!
( clang 0_helloworld.c -o helloworld --std=c11 && ./helloworld; )
  0.00s user  0.00s system  0% cpu  0.303 total

# run Python equivalent
Hello, World!
( python3 -c 'print("Hello, World!", end="")'; )
  0.02s user  0.01s system  82% cpu  0.034 total

# run pre-compiled C binary only
Hello, World!
( ./helloworld; )
  0.00s user  0.00s system  73% cpu  0.003 total
```

**Takeaway:** Once compiled, the C binary runs in ~3ms. Python takes ~34ms — about 10× slower — even for a trivial print. The C compile+run total (303ms) is dominated by compilation time, not execution.
