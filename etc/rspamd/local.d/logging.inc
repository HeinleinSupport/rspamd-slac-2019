type = "syslog";
facility = "mail";

# Enable debug for specific modules (e.g. `debug_modules = ["dkim", "re_cache"];`)
debug_modules = [];


log_format =<<EOD
id: <$mid>,$if_qid{ qid: <$>,}$if_ip{ ip: $,}$if_user{ user: $,}$if_smtp_from{ from: <$>,}
$lua{return function(task) return ' subject: ' .. tostring(task:get_subject()) .. ', ' end }
(default: $is_spam ($action): [$scores] [$symbols_scores_params]),
len: $len, time: $time_real real, $time_virtual virtual, dns req: $dns_req,
digest: <$digest>$if_smtp_rcpts{, rcpts: <$>}$if_mime_rcpts{, mime_rcpts: <$>}
$if_filename{, file: $}
EOD


