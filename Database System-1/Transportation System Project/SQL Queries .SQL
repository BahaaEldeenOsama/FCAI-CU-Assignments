A .What was the area that had the most/least ride requests last month?

Select Cities.CityName ,Count(Requests.RequestID) Cnt
From	  Cities inner join Requests on Cities.CityID = Requests.EndCityID   
Where	  Requests.RequestDate between '2020-5-1' And '2020-5-31'
And	  Requests.Accepted = 1
Group By Cities.CityName
Order By Count(Requests.RequestID) Desc



 


B. Who were the drivers with the maximum number of rides last month?  

Select		Drivers.DriverID , Drivers.DriverName , 
		           Count(Requests.DriverID) As TripCount
From		Drivers inner join Requests on Drivers.DriverID = Requests.DriverID 
Where		Requests.RequestDate between '2020-5-1' And '2020-5-31'
And		Requests.Accepted = 1
Group By          Drivers.DriverID , Drivers.DriverName
Having		Count(Drivers.DriverID) In ( Select	Max(Cnt) As MaxCount
						From	( Select Count(DriverID) Cnt 
						From	Requests   Where  RequestDate 
                                                                        between '2020-5-1' And '2020-5-31' 
                                                                        And	Requests.Accepted = 1
						         Group By	DriverID )As MaxCount )


 
C. For each driver, retrieve all his/her information and the number of rides he/she had

Select Drivers.DriverName	,
	  Drivers.Phone		,
	  Drivers.EMail		,
	  Drivers.Address	,
	  Count(Requests.RequestID) As RidesNumber
From	Drivers Left  Join Requests		
On   Drivers.DriverID = Requests.DriverID
Where Requests.Accepted=1
Group By Drivers.DriverName , Drivers.Phone , Drivers.EMail ,  Drivers.Address 

 


D. Which driver got at least 4.5 out of 5 on every user rating he/she got?

Select		Distinct Drivers.DriverName
From               Drivers Inner Join Requests
On                   Drivers.DriverID = Requests.DriverID
Where	            Drivers.DriverID  In( Select Requests.DriverID
                        From Requests Where	Requests.Accepted = 1
                        Group By Requests.DriverID
                        Having   Count(*) >	0 )
                       And Drivers.DriverID Not In(Select  Requests.DriverID
                                               From    Requests Inner Join Trips
                                              On Requests.RequestID = Trips.RequestID
                                              Where   Trips.TripRating < 4.5	)


 

E. Who were the drivers that didn’t have any ride last month?

Select	Drivers.DriverName
From		Drivers
Where		Drivers.DriverID Not In
(Select Requests.DriverID From Requests
Where Requests.RequestDate
Between '2020-5-1' And '2020-5-31'
And Requests.Accepted = 1
Group By	Requests.DriverID
Having Count(*) >0 )

 


F. What is the most type of vehicle (car, bus, and scooter) requested last month?

Select VehicleTypes.VehicleTypeDesc,
Count(VehicleTypes.VehicleTypeDesc) Cnt
From VehicleTypes inner join Vehicles
On VehicleTypes.VehicleTypeID = Vehicles.VehicleTypeID
inner join Drivers
on Vehicles.DriverID = Drivers.DriverID
inner join Requests
on Requests.DriverID = Drivers.DriverID
Where Requests.Accepted=1
And   Requests.RequestDate Between '2020-5-1' And '2020-5-31'
Group by VehicleTypes.VehicleTypeDesc
Order by Count(VehicleTypes.VehicleTypeDesc) Desc

 
