## Description

This service implement REST architecture. Some factors which make this solution REST:

* It is a client-server architecture;
* No client state is transferred during communication between client and server (Stateless);
* The client-server messages are actually representation of resources.
* Some of the server responses can be cached (GET requests).

But this solution is not pure REST, because:

* Client-server messages are self-descriptive only if there is already some information about our data on Client. So, content_type will show what kind of data is in received Json.
