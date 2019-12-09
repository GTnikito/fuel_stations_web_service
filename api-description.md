## Description

This service implement REST architecture. Some factors which make this solution REST:

* It is a client-server architecture;
* No client state is transferred during communication between client and server (Stateless);
* The client-server messages are actually representation of resources.
* Some of the server responses can be cached (GET requests).

But this solution is not pure REST, because:

* Because client-server  messages are not self-descriptive, client will need to hard code the description and parsing of message.
