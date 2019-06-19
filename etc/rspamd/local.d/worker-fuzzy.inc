
allow_update = ["127.0.0.1", "::1"];
bind_socket = "127.0.0.1:11335";

# Number of processes to serve this storage (useful for read scaling)
count = 4;

# Backend ("sqlite" or "redis" - default "sqlite")
backend = "redis";

# Hashes storage time (3 months)
expire = 180d;

# Synchronize updates to the storage each minute
sync = 1min;


