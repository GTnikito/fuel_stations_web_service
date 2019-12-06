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

Method: `GET /fuel_stations/:id` where `id` is a unique fuel station descriptor.

Response: `fuelStation` where `fuelStation` is a [station representation][station-representatio].

### The `fuelPrice` collection

The `fuelPrice` collection contains information about the price for fuel that is offered by stations described in the above section. Clients cannot change any of this information.

#### Getting all fuel prices

Method: `GET /fuelPrices`

Response:

```{json}
{
   "fuelPrices": [fuelPrice],
   "self": "/fuelPrices",
}
```

where `fuelPrice` is a [fuel price representation][fuel-price-representation].

#### Getting the minimum fuel price

Method: `GET /fuelPrices/min`

Response: `fuelPrice` where `fuelPrice` is a [fuel price representation][fuel-price-representation].

### Fuel price at fuel station

#### Getting fuel price at exact fuel station

Method: `GET /fuel_stations/:id/fuel_price` where `id` is a unique fuel station descriptor.

Response: `fuelPrice` where `fuelPrice` is a [fuel price representation][fuel-price-representation].

#### Updating fuel price at exact fuel station

Method: `PUT /fuel_stations/:id/fuel_price` where `id` is a unique fuel station descriptor.

Request: `fuelPrice` where `fuelPrice` is a [fuel price representation][fuel-price-representation]. Fields `self`, `fuel_station.self`, `fuel_station.name` are ignored.

Response: `fuelPrice` where `fuelPrice` is a [fuel price representation][fuel-price-representation].

[station-representatio]: representations.md#Fuel-station
[fuel-price-representation]: representations.md#Fuel-buy-price
