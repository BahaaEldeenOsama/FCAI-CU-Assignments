import java.io.*;
import java.net.*;


public class Server {

	private static DatagramSocket datagramSocket;
	private static int port = 35000;  
	private static DatagramPacket datagramPacket_Receive;
	
	public static void main(String args[]) throws Exception
    	{

		    datagramSocket = new DatagramSocket(port);
     		byte[] receiveData = new byte[1024];
 
     		while(true)
        		{
     			    
     			    datagramPacket_Receive = new DatagramPacket(receiveData, receiveData.length);
           			datagramSocket.receive(datagramPacket_Receive);

           			InetAddress IPAddress = datagramPacket_Receive.getAddress();
           			int port_client = datagramPacket_Receive.getPort();
           		            
           			System.out.println("\t\t\t\t<<<===============================>>>  ");
           			System.out.println("\t\t\t\t<<<        Server Side            >>>  ");
           			System.out.println("\t\t\t\t<<<===============================>>>\n\n");
           			System.out.println("Client IP   : " + IPAddress);
           			System.out.println("Client Port : " + port_client);
           
           			
        		}
	}

}
