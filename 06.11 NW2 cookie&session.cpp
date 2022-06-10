/*
Cookie
: server는 response를 보내고 나면 그 client는 잊어버린다. 
웹사이트가 user를 구별하기 원하거나, user access를 제한하기를 원한다면??: 
cookies에는 그 user를 위한 identifier가 담겨있다.?1. set-cookie header 를 
HTTP response message에 포함?2. cookie header는 request message에 포함?3. cookie 
파일은 user의 host에 계속 있고, user의 브라우저에 의해 관리된다.?4. Back-end Database는 
웹 사이트에 있다.?: 세션유지에 사용?Persistent Cookie: 브라우저를 종료해도 사용자의 
하드드라이브에 저장. 만료시기가 되면 삭제?Session Cookie: 웹 클라이언트(IE) CASH에 
임시 저장. 삭제 시기는 서버에서 만료되면 삭제

- Session: 사전적 의미로 "시간"을 의미: 클라이언트와 웹 서버간에 통신 연결에서 두 
개체의 활성화된 접속을 뜻함: 클라이언트가 웹서버에 요청하여 처음 접속하면 JSP나 ASP 엔진은 
요청한 클라이언트에 대하여 유일한 ID를 부여하게 되는데 이 ID를 세션이라 부름: 세션 ID를 
임시로 저장하여 페이지 이동 시 이용하거나, 클라리언트가 재접속 했을 때 클라이언트를 
구분할 수 있는 유일한 수단: 각각의 클라이언트마다 고유의 ID부여,?Session 객체들마다 
저장해 둔 Data를 이용,?클라이언트 자신만의 고유한 페이지를 열어놓아서 생길 수 있는 
보안상의 문제 해결 능력- Session vs. Cookie?: Session은 서버 쪽에 정보를 저장하고, 
쿠키는 클라이언트 쪽에 정보를 저장한다는 것이 가장 큰 차이점

*/
