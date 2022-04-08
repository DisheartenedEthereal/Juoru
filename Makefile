out := peer
in := protocol/peer.c
compile:
	gcc -o $(out) $(in)
checkFiles:
	test -f $files || continue


