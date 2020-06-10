/*   Create lookup Table for Governorates      */
CREATE TABLE [Governorates](
	[GovID]		  [int] NOT NULL,
	[GovName]		  [varchar](150) NULL,
 CONSTRAINT [PK_Governorates] PRIMARY KEY CLUSTERED 
(	[GovID] ASC  )

) ON [PRIMARY]

GO


/*   Create lookup Table for Cities with  FOREIGN KEYS CONSTRAINTS      */
CREATE TABLE [Cities](
	[GovID]		[int] NOT NULL,
	[CityID]		[int] NOT NULL,
	[CityName]		[varchar](150) NULL,
 CONSTRAINT [PK_Cities] PRIMARY KEY CLUSTERED 
(
	[GovID]	ASC,
	[CityID]	ASC
)
) ON [PRIMARY]

GO
ALTER TABLE [Cities] ADD CONSTRAINT [FK_Cities_Governorates] FOREIGN KEY([GovID])
REFERENCES [Governorates] ([GovID])
GO


/*   Create Users Table        */
CREATE TABLE [Users](
	[UserID]		[int] NOT NULL,
	[UserName]		[varchar](150) NULL,
	[Address]		[varchar](250) NULL,
	[Phone]		[varchar](50) NULL,
	[Email]		[varchar](150) NULL,
	[Password]		[varchar](50) NULL,
 CONSTRAINT [PK_Users] PRIMARY KEY CLUSTERED 
(	[UserID] ASC )
) ON [PRIMARY]

GO

/*   Create Drivers Table       */
CREATE TABLE [Drivers](
	[DriverID]   [int] NOT NULL,
	[DriverName] [varchar](150) NULL,
	[Phone]      [varchar](50) NULL,
	[EMail]      [varchar](50) NULL,
	[Address]    [varchar](50) NULL,
	[FaceImage]  [varbinary](max) NULL,
	[Bonus]      [decimal](18, 0) NULL,
 CONSTRAINT [PK_Drivers] PRIMARY KEY CLUSTERED 
(	[DriverID] ASC )
) ON [PRIMARY] 

GO

/*   Create lookup Table for Payment Types      */
CREATE TABLE [PaymentTypes](
	[PaymentTypeID]   [int] NOT NULL,
	[PaymentTypeDesc] [varchar](50) NULL,
 CONSTRAINT [PK_PaymentTypes] PRIMARY KEY CLUSTERED 
(	[PaymentTypeID] ASC )
) ON [PRIMARY]

GO

/*   Create lookup Table for Vehicle Types      */
CREATE TABLE [VehicleTypes](
	[VehicleTypeID]   [int] NOT NULL,
	[VehicleTypeDesc] [varchar](50) NULL,
 CONSTRAINT [PK_VehicleTypes] PRIMARY KEY CLUSTERED 
(	[VehicleTypeID] ASC	)
) ON [PRIMARY]

GO

/*   Create Table for Vehicles Data with  FOREIGN KEYS CONSTRAINTS    */
CREATE TABLE [Vehicles](
	[VehicleID]      [int] NOT NULL,
	[VehicleTypeID]  [int] NULL,
	[VehicleModel]   [varchar](50) NULL,
	[VehicleColor]   [varchar](50) NULL,
	[LicensePlateNo] [varchar](50) NULL,
	[DriverID] [int] NULL,
 CONSTRAINT [PK_Vehicles] PRIMARY KEY CLUSTERED 
([VehicleID] ASC)
) ON [PRIMARY]

GO

ALTER TABLE [Vehicles] ADD CONSTRAINT [FK_Vehicles_Drivers] FOREIGN KEY([DriverID])
REFERENCES [Drivers] ([DriverID])
GO

ALTER TABLE [Vehicles]   ADD  CONSTRAINT [FK_Vehicles_VehicleTypes] FOREIGN KEY([VehicleTypeID])
REFERENCES [VehicleTypes] ([VehicleTypeID])
GO


/*   Create Table for Users Requests Data and  FOREIGN KEYS CONSTRAINTS    */

CREATE TABLE [Requests](
	[RequestID]    [int] NOT NULL,
	[RequestDate]  [date] NULL,
	[UserID]       [int] NULL,
	[DriverID]     [int] NULL,
	[Accepted]     [bit] NULL,
	[StartGovID]   [int] NULL,
	[StartCityID]  [int] NULL,
	[StartStreet]  [varchar](500) NULL,
	[EndGovID]     [int] NULL,
	[EndCityID]    [int] NULL,
	[EndStreet]    [varchar](500) NULL,
 CONSTRAINT [PK_Requests] PRIMARY KEY CLUSTERED 
(	[RequestID] ASC)
) ON [PRIMARY]

GO


ALTER TABLE [Requests]  ADD  CONSTRAINT [FK_Requests_Cities] FOREIGN KEY([StartGovID], [StartCityID])
REFERENCES [Cities] ([GovID], [CityID])
GO


ALTER TABLE [Requests] ADD CONSTRAINT [FK_Requests_Cities1] FOREIGN KEY([EndGovID], [EndCityID])
REFERENCES [Cities] ([GovID], [CityID])
GO


ALTER TABLE [Requests] ADD CONSTRAINT [FK_Requests_Drivers] FOREIGN KEY([DriverID])
REFERENCES [Drivers] ([DriverID])
GO

ALTER TABLE [Requests] ADD CONSTRAINT [FK_Requests_Users] FOREIGN KEY([UserID])
REFERENCES [Users] ([UserID])
GO


/*   Create Table for Users Trips Data and FOREIGN KEYS CONSTRAINTS    */

CREATE TABLE [Trips](
	[TripID] 			[int] NOT NULL,
	[RequestID] 		[int] NULL,
	[PaymentTypeID] 	[int] NULL,
	[TripFees] 		[float] NOT NULL,
	[TripStartTime] 	[time](7) NULL,
	[TripEndTime] 		[time](7) NULL,
	[TripRating] 		[smallint] NULL,
	[TripDistance] 		[decimal](18, 2) NULL,
	[TripPromoCode] 	[varchar](50) NULL,
 CONSTRAINT [PK_Trip] PRIMARY KEY CLUSTERED 
(	[TripID] ASC) 
) ON [PRIMARY]

GO


ALTER TABLE [Trips] ADD CONSTRAINT [FK_Trips_PaymentTypes] FOREIGN KEY([PaymentTypeID])
REFERENCES [PaymentTypes] ([PaymentTypeID])
GO

ALTER TABLE [Trips] ADD CONSTRAINT [FK_Trips_Requests] FOREIGN KEY([RequestID])
REFERENCES [Requests] ([RequestID])
GO
