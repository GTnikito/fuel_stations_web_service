# Representations

## Fuel station

Representation of a Fuel Station information (`fuelStation`). It contains a full station name (`name`) and a short unique descriptor (`id`). The `self` field contains a link to this resource that can be used in [this][get-fuel-station] request.

```{json}
{
    "content_type" : "fuelStation",
    "self": str,
    "name": str,
    "fuel_info": "fuel_stations/{self}/fuel_info",
}
```

## Fuel info

Representation of fuel info (`fuelInfo`). The `type` and `maxSell` fields contain the type of the fuel to buy and volume of fuel available to buy. The `cost` field contains the price of 1 unit of the fuel that you want to buy in local currency.

```{json}
{
    "content_type" : "fuelInfo",
    "cost": float,
    "type": str,
    "max_sell" : float,
}
```

## Fuel buy price

Representation that contains the full information about the fuel price in a single fuel station (`fuelPrice`). The `station` field contains the [representaion of the station][station-representation] that offers the cost described in the `cost` field in format of [fuel info representation][fuel-info-representation]. The `self` field contains the link to this resource that can be used either in [this][get-price] or in [this][get-min] request.

```{json}
{
    "content_type" : "fuelPrice",
    "self": str,
    "station_url": str,
    
    "links": [
        {
            "rel": "fuel_station",
            "href": "fuel_stations/{station_url}"
        },
        {
            "rel": "fuel_info",
            "href": "fuel_stations/{station_url}/fuel_info"
        }
    ],
}
```

[fuel-info-representation]: representations.md#Fuel-info
[station-representation]: representations.md#Fuel-station
[get-fuel-station]: requests.md#getting-a-single-fuel-station-info
[get-price]: requests.md#getting-fuel-price-at-exact-fuel-station
[get-min]: requests.md#getting-the-minimum-fuel-price
