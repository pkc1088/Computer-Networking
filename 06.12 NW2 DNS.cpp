/*
: Domain Name System: IP �ּҿ� Name�� mapping�� �ʿ��� -> name-address resolution
: hostname�� ip�ּҷ� ��ȯ, host?aliasing, mail server aliasing, load distribution
: UDP/TCP �� �� ��밡�������� �ַ� UDP ���, PORT 53
: Ʈ����, single point of failure, �Ÿ�, Ȯ�强 ���� ������ �߾� ���� ������?�������� �ʰ�, 
�л� �����ͺ��̽��� ���� name server�� �������·� ����

: www.amazon.com�� ip �ּҸ� ��� ����
1. client�� root server�� com DNS server�� ã������ query�� ������.
2. client�� com DNS server�� amazon.com DNS server�� ã������ query�� ������.
3. client�� amazon.com DNS server�� www.amazon.com�� ip �ּҸ� ��� ���� query�� ������.
 -> �ּ��� �������� �����ϸ鼭 ip�ּҸ� ã�ư�
: Root DNS server : 13�� (A~M) ���������� ����
: Top-level domain (TLD) servers??com, org, net, edu, etc,?kr, uk, fr, ca, jp ��
: Authoritative DNS servers? � ��ü�� ���� DNS �������� IP�ּ�
: Local Name Server? ������ ���������� �ƴ� �� ISP(default name server)�� �ϳ��� ������ ����,
  host�� DNS query�� �����ϸ� query�� DNS server�� ����, ��ġ ���Ͻ�ó�� ���������� query ����
: caching and updating records

*/
