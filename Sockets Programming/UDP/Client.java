import java.io.*;
import java.net.*;

public class Client {

	private static int port = 35000;  
	private static DatagramSocket datagramSocket;
	private static InetAddress IPAddress;
	private static DatagramPacket datagramPacket_Send;
	
	public static void main(String args[]) throws Exception
	   {
   		
	    	byte[] myData = new byte[1024];
	      	String sentence = "Hello Server";
	      	myData = sentence.getBytes();
		
	      	datagramSocket = new DatagramSocket();
	      	IPAddress = InetAddress.getByName("localhost");
			
	      	datagramPacket_Send = new DatagramPacket(myData, myData.length, IPAddress, port);
	      	datagramSocket.send(datagramPacket_Send);
	      	
	      	System.out.println("\t\t\t\t<<<===============================>>>  ");
	      	System.out.println("\t\t\t\t<<<        Client Side            >>>  ");
	      	System.out.println("\t\t\t\t<<<===============================>>>\n\n");
	      	System.out.println(" Hello Message has been sent to the Server .... ");

		    
	      	datagramSocket.close();
		
	   }


}
