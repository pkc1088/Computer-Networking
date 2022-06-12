/*
: Domain Name System: IP 주소와 Name의 mapping가 필요함 -> name-address resolution
: hostname을 ip주소로 변환, host?aliasing, mail server aliasing, load distribution
: UDP/TCP 둘 다 사용가능하지만 주로 UDP 사용, PORT 53
: 트래픽, single point of failure, 거리, 확장성 등의 문제로 중앙 집권 구조로?구현하지 않고, 
분산 데이터베이스로 많은 name server의 계층형태로 구현

: www.amazon.com의 ip 주소를 얻는 과정
1. client가 root server로 com DNS server를 찾기위해 query를 보낸다.
2. client가 com DNS server로 amazon.com DNS server를 찾기위해 query를 보낸다.
3. client가 amazon.com DNS server로 www.amazon.com의 ip 주소를 얻기 위해 query를 보낸다.
 -> 주소의 역순으로 접근하면서 ip주소를 찾아감
: Root DNS server : 13개 (A~M) 세계적으로 존재
: Top-level domain (TLD) servers??com, org, net, edu, etc,?kr, uk, fr, ca, jp 등
: Authoritative DNS servers? 어떤 단체에 대한 DNS 실제적인 IP주소
: Local Name Server? 엄격한 계층구조가 아닌 각 ISP(default name server)를 하나씩 가지고 있음,
  host가 DNS query를 생성하면 query가 DNS server로 전송, 마치 프록시처럼 계층적으로 query 전달
: caching and updating records

*/
