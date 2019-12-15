## Requests

### The `fuel_stations` collection

The `fuel_stations` collection contains information about all the fuel station saved on server. Clients cannot change any of this information.

#### Getting the list of all fuel stations

Method: `GET /fuel_stations`.

Response:

```{json}
{
    "fuel_stations": [fuelStation],
    "self": "/fuel_stations",
}
```

where `fuelStation` is a [station representation][station-representation].

#### Getting a single fuel station info

Method: `GET /fuel_stations/{fuel_station_url}` where `fuel_station_url` is a unique fuel station url.

Response: `fuelStation` where `fuelStation` is a [station representation][station-representatio].

### The `fuelPrice` collection

The `fuelPrice` collection contains information about the price for fuel that is offered by stations described in the above section. Clients cannot change any of this information.

#### Getting all fuel prices

Method: `GET /fuel_prices`

Response:

```{json}
{
   "fuel_prices": [fuelPrice],
   "self": "/fuel_prices",
}
```

where `fuelPrice` is a [fuel price representation][fuel-price-representation].

#### Getting the minimum fuel price

Method: `GET /fuel_prices/min`

Response: `fuelPrice` where `fuelPrice` is a [fuel price representation][fuel-price-representation].

### Fuel info at fuel station

#### Getting fuel info at exact fuel station

Method: `GET /fuel_stations/{fuel_station_url}/fuel_info` where `fuel_station_url` is a unique fuel station url.

Response: `fuelInfo` where `fuelInfo` is a [fuel info representation][fuel-info-representation].

#### Updating fuel info at exact fuel station

Method: `PUT /fuel_stations/{fuel_station_url}/fuel_info` where `fuel_station_url` is a unique fuel station url.

Request: `fuelInfo` where `fuelInfo` is a [fuel info representation][fuel-info-representation].

Response: `fuelInfo` where `fuelInfo` is a [fuel info representation][fuel-info-representation].

[station-representatio]: representations.md#Fuel-station
[fuel-info-representation]: representations.md#Fuel-info
[fuel-price-representation]: representations.md#Fuel-price-representation
