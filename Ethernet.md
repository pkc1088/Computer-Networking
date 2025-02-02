
이더넷(영어: Ethernet)은 컴퓨터 네트워크 기술의 하나로, 일반적으로 LAN, MAN 및 WAN에서 가장 많이 활용되는 기술 
규격이다.[1] '이더넷'이라는 명칭(이름)은 빛의 매질로 여겨졌던 에테르(ether)에서 유래되었다. 이더넷은 OSI 모델의 
물리 계층에서 신호와 배선, 데이터 링크 계층에서 MAC(media access control) 패킷과 프로토콜의 형식을 정의한다. 
이더넷 기술은 대부분 IEEE 802.3 규약으로 표준화되었다. 현재 가장 널리 사용되고 있으며, 토큰 링, FDDI 등의 다른 
표준을 대부분 대체했다.

이더넷 허브(ethernet hub)는 이더넷 네트워크에서 여러 대의 컴퓨터, 네트워크 장비를 연결하는 장치이다. 
한 대의 허브를 중심으로 여러대의 컴퓨터와 네트워크 장비가 마치 별 모양으로 서로 연결되며, 같은 허브에 연결된 
컴퓨터와 네트워크 장비는 모두 상호 간에 통신을 할 수 있게 된다. 허브에 라우터나 3계층 스위치 등의 장비가 연결되어 
있으면 이를 통해 더 높은 계층의 네트워크(WAN, MAN 등)과도 연결할 수 있다. 허브와 컴퓨터 장비간의 연결에는 보통 
UTP 케이블과 RJ45 커넥터가 쓰인다.
허브로 연결된 네트워크에서는 한 컴퓨터에서 주고받는 데이터가 같은 허브에 연결된 다른 모든 컴퓨터에 전달(broadcast)된
다. 이 데이터는 맨체스터 코드를 사용하여 인코딩된다. 따라서 연결된 컴퓨터의 개수가 많아질 수록 네트워크에서 충돌(collision)이 많아지고 속도가 느려진다. 이 문제를 해결하기 위해 최근에는 데이터가 필요한 컴퓨터에만 전송하는 이더넷 스위치를 많이 사용한다.
대부분의 허브는 충돌을 탐지하기 위해 반이중(half duplex)만을 지원하는 데 반해, 대부분의 이더넷 스위치는 전이중
(full duplex)을 지원한다

이더넷 스위치는 허브와 목적이 거의 동일하지만, 훨씬 향상된 네트워크 속도를 제공한다. 이는 각 컴퓨터에서 주고 받는 
데이터가 허브처럼 다른 모든 컴퓨터에 전송되는 것이 아니라, 데이터를 필요로 하는 컴퓨터에만 전송되기 때문에 가능하다. 
따라서 허브처럼 병목 현상이 쉽게 생기지 않는다. 또한 대부분의 이더넷 스위치는 전이중 통신방식(full duplex)을 
지원하기 때문에 송신과 수신이 동시에 일어나는 경우 훨씬 향상된 속도를 제공한다.
스위치는 이 기능을 수행하기 위해 각 컴퓨터의 고유한 MAC 주소를 기억하고 있어야 하며, 이 주소를 통해 어떤 데이터가 
어디로 전송되어야 하는지 판단해야 한다.
하지만 스위치를 이용하는 경우도 대량의 동보발송이나 스위치의 처리용량을 초과하는 데이터 흐름에 대해서는 취약할
수밖에 없으므로 커다란 네트워크의 경우는 VLAN 스위치나 라우터 등을 이용해 네트워크 자체를 분리해야 한다.
스위칭 허브(switching hub), 포트 스위칭 허브(port switching hub)라고도 불린다.

