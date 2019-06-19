# we're not running rspamd in a distributed setup, so this can be disabled
# the proxy worker will handle all the spam filtering
enabled = true;

bind_socket = "127.0.0.1:11333";
