#include <getopt.h>
#include <net/ethernet.h>
#include <netinet/ether.h>
#include <netinet/ip.h>
#include <netinet/tcp.h>
#include <netinet/udp.h>
#include <pcap.h>
#include <stdio.h>
#include <stdlib.h>

// Protocol
#define DATA_FTP 20
#define FTP 21
#define SMTP_1 25
#define SMTP_2 465
#define SMTP_3 587
#define SMTP_4 2525
#define SMTP_5 25025
#define DNS_PORT 53
#define BOOTP_PORT 67
#define HTTP_PORT 80

// Lien des assets
// packetlife.net/captures/protocol/