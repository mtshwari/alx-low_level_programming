echo "int rand() { return 9; }" > /tmp/rand.c
gcc -fPIC -shared -o /tmp/rand.so /tmp/rand.c
export LD_PRELOAD=/tmp/rand.so
