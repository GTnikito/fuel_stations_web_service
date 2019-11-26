# Representations

## Fuel station

Representation of a Fuel Station information (`fuelStation`). It contains a full station name (`name`) and a short unique descriptor (`id`). The `self` field contains a link to this resource that can be used in [this][get-fuel-station] request.

```{json}
{
    "name": str,
    "id": str,
    "self": str,
}
```

## Fuel info

Representation of fuel info (`fuelInfo`). The `type` and `maxBuy` fields contain the type of the fuel to buy and volume of fuel available to buy. The `cost` field contains the price of 1 unit of the fuel that you want to buy in local currency.

```{json}
{
    "cost": float,
    "type": str,
    "maxBuy": float,
}
```

## Fuel buy price

Representation that contains the full information about the fuel price in a single fuel station (`fuelPrice`). The `station` field contains the [representaion of the station][station-representation] that offers the cost described in the `cost` field in format of [fuel info representation][fuel-info-representation]. The `self` field contains the link to this resource that can be used either in [this][get-price] or in [this][get-min] request.

```{json}
{
    "station": fuelStation,
    "info": fuelInfo,
    "self": str,
}
```

[fuel-info-representation]: representations.md#Fuel-info
[station-representation]: representations.md#Fuel-station
[get-bank]: requests.md#getting-a-single-bank-info
[get-price]: requests.md#getting-rate-that-is-offered-by-a-single-bank
[get-min]: requests.md#getting-the-minimum-rate
