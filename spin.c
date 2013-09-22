probe kernel.function("inet_csk_accept@net/ipv4/inet_connection_sock.c").call
{
	printf("process is %s, pid = %d, tid = %d \n",execname(),pid(),tid())
}
