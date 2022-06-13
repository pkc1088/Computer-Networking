// 1. py server.py �� ���� �͹̳� ���� 
// 2. py client.py�� Ŭ�� �͹̳� ����
// 3. client�͹̳ο� �޼��� �Է� 

// server
import socket
# ������ ���� �ּ��Դϴ�. ���⿡���� ������(loopback) �������̽� �ּ� �� localhost�� ����մϴ�. 
HOST = '127.0.0.1'
# Ŭ���̾�Ʈ ������ ����ϴ� ��Ʈ ��ȣ�Դϴ�.   
PORT = 9999        
# ���� ��ü�� �����մϴ�. 
# �ּ� ü��(address family)�� IPv4, ���� Ÿ������ TCP ����մϴ�.  
server_socket = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
# ��Ʈ ������̶� ������ �� ���ٴ� 
# WinError 10048 ���� �ذḦ ���� �ʿ��մϴ�. 
server_socket.setsockopt(socket.SOL_SOCKET, socket.SO_REUSEADDR, 1)
# bind �Լ��� ������ Ư�� ��Ʈ��ũ �������̽��� ��Ʈ ��ȣ�� �����ϴµ� ���˴ϴ�.
# HOST�� hostname, ip address, �� ���ڿ� ""�� �� �� �ֽ��ϴ�.
# �� ���ڿ��̸� ��� ��Ʈ��ũ �������̽��κ����� ������ ����մϴ�. 
# PORT�� 1-65535 ������ ���ڸ� ����� �� �ֽ��ϴ�.  
server_socket.bind((HOST, PORT))
# ������ Ŭ���̾�Ʈ�� ������ ����ϵ��� �մϴ�. 
server_socket.listen()
# accept �Լ����� ����ϴٰ� Ŭ���̾�Ʈ�� �����ϸ� ���ο� ������ �����մϴ�. 
client_socket, addr = server_socket.accept()
# ������ Ŭ���̾�Ʈ�� �ּ��Դϴ�.
print('\nConnected by', addr)

# ���ѷ����� ���鼭 
while True:
    # Ŭ���̾�Ʈ�� ���� �޽����� �����ϱ� ���� ����մϴ�. 
    data = client_socket.recv(1024)
    # �� ���ڿ��� �����ϸ� ������ �����մϴ�. 
    if not data:
        break
    # ���Ź��� ���ڿ��� ����մϴ�.
    print('server received ', data.decode(), ' from', addr, '\n')
    # ���� ���ڿ��� �ٽ� Ŭ���̾�Ʈ�� �������ݴϴ�.(����) 
    client_socket.sendall(data + '-echo'.encode())
# ������ �ݽ��ϴ�.
client_socket.close()
server_socket.close()

//client
import socket
# ������ �ּ��Դϴ�. hostname �Ǵ� ip address�� ����� �� �ֽ��ϴ�.
HOST = '127.0.0.1'  
# �������� ������ ���� ��Ʈ ��ȣ�Դϴ�. 
PORT = 9999       
# ���� ��ü�� �����մϴ�. 
# �ּ� ü��(address family)�� IPv4, ���� Ÿ������ TCP ����մϴ�.  
client_socket = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
# ������ HOST�� PORT�� ����Ͽ� ������ �����մϴ�. 
client_socket.connect((HOST, PORT))
# �޽����� �����մϴ�. 
message = input()
client_socket.sendall(message.encode())
# �޽����� �����մϴ�. 
data = client_socket.recv(1024)
print('\nmessage ', repr(data.decode()),'  is received\n')
# ������ �ݽ��ϴ�.
client_socket.close()
