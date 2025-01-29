#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char* msg=  "HTTP/1.1 200 OK\r\n"
                "Connection: close\r\n"
                "Content-Length: 9313\r\n"
                "Server: GitHub.com\r\n"
                "Content-Type: text/html; charset=utf-8\r\n"
                "Last-Modified: Fri, 24 Jan 2025 04:45:47 GMT\r\n"
                "Access-Control-Allow-Origin: *\r\n"
                "ETag: \"67931afb-2461\"\r\n"
                "expires: Wed, 29 Jan 2025 02:36:12 GMT\r\n"
                "Cache-Control: max-age=600\r\n"
                "x-proxy-cache: MISS\r\n"
                "X-GitHub-Request-Id: 9337:449D1:BC46ED:CFB0E3:679991C3\r\n"
                "Accept-Ranges: bytes\r\n"
                "Age: 0\r\n"
                "Date: Wed, 29 Jan 2025 02:26:12 GMT\r\n"
                "Via: 1.1 varnish\r\n"
                "X-Served-By: cache-pdk-kfty8610027-PDK\r\n"
                "X-Cache: MISS\r\n"
                "X-Cache-Hits: 0\r\n"
                "X-Timer: S1738117572.402250,VS0,VE26\r\n"
                "Vary: Accept-Encoding\r\n"
                "X-Fastly-Request-ID: 98437be7fd6fa96ff118a152a97f05f0c2395d70\r\n"
                "\r\n"
                "Body......";
    
    // Step 1: Extract HTTP version, status code, and status message

    // Step 2: Find and print the message body
    
    // Step 3: Check if Content-Type is HTML

    // Step 4: Extract date

}