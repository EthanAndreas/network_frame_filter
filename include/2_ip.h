#ifndef IP
#define IP

#include "../include/3_tcp.h"
#include "../include/3_udp.h"
#include "../include/include.h"

struct iphdr *ip_analyzer(const u_char *packet, int verbose);

void get_protocol_ip(const u_char *packet, struct iphdr *ip_header,
                     int length, int verbose);

#endif