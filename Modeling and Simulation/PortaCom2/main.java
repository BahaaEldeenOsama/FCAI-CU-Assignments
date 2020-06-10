import java.util.Random;


public class main {


	public main() {
		// TODO Auto-generated constructor stub
	}
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		
	   double []arr={0,0};	 
	   long demand=0,Available_PCs=0,store=0;
	   double loss_per_week=0.0,profit_per_week=0.0,total_profit=0.0,total_avg=0.0,probability_of_demand=0.0;

	   
	   
	   for(int order_per_Week=1;order_per_Week<=2;++order_per_Week)
	   {
		   Available_PCs=0;
		   for(int week=1;week<=500;++week)
		   {
			   Random random = new Random();
			   probability_of_demand = random.nextDouble();
			   
			   
			   if(probability_of_demand>=0.0 && probability_of_demand<0.2 )
			   {
				   demand=0;
			   }
			   else if(probability_of_demand>=0.2 && probability_of_demand<0.6)
			   {
				   demand=1; 
			   }
			   else if(probability_of_demand>=0.6 && probability_of_demand<0.8)
			   {
				   demand=2;
			   }
			   else if(probability_of_demand>=0.8 &&probability_of_demand<0.9)
			   {
				   demand=3;
			   }
			   else if(probability_of_demand>=0.9 && probability_of_demand<1.0)
			   {
				   demand=4;
			   }
			   
			   
			   //System.out.println("store "+store);
			   Available_PCs =  order_per_Week + Available_PCs;	 
			   
			   if(demand>Available_PCs)
			   {
				 
				   profit_per_week = (Available_PCs*450) - (demand - Available_PCs)*100 ; 
				   Available_PCs =0 ;
				   
			   }
			   else if (demand<Available_PCs)
			   {
				   
				   profit_per_week =  (demand*450) - (Available_PCs - demand)*50  ; 				   
				   Available_PCs=Available_PCs-demand;
				   			   
			   }
			   else if(demand==Available_PCs)
			   {
				   profit_per_week = (Available_PCs*450);
				   Available_PCs =0 ;
			   }
	   
			   
			   total_profit+=profit_per_week;
			   
			  
		   }///End inner loop.
		   	   
		   total_avg = total_profit/500;	 
		  arr[order_per_Week-1] = total_avg;
		  total_profit=0;
		 //System.out.println("Total Avarge =" + total_avg ); 
	   
	   }///End outer loop.
	   
	   if(arr[0]>arr[1]){
		  System.out.println("One order PC per week is better"); 
		  System.out.println("Total Avarge =" + arr[0] );
	   }
	   else if(arr[0]<arr[1])
	   {
		   System.out.println("Two order PC per week is better"); 
		   System.out.println("Total Avarge =" + arr[1] ); 
	   }
	   else
	   {
		   System.out.println("One order PC or two order PC same profit\n"); 
	   }
	 
		   
	   
	}

	
}
