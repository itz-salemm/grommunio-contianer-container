bind_socket = "127.0.0.1:11332";
bind_socket = "[::1]:11332";
milter = yes;
timeout = 120s;
upstream "local" {
  default = yes;
  self_scan = yes;
}
