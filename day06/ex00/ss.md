Initial Intrusion
The pentester has used a web based attack vector that allowed her to take over the server.
Points: 5


80/tcp   open  http          Microsoft IIS httpd 10.0
|_http-server-header: Microsoft-IIS/10.0
| http-methods: 
|_  Potentially risky methods: TRACE
|_http-title: 172.16.4.130 - /
135/tcp  open  msrpc         Microsoft Windows RPC
139/tcp  open  netbios-ssn   Microsoft Windows netbios-ssn
445/tcp  open  microsoft-ds  Windows Server 2016 Datacenter 14393 microsoft-ds
3389/tcp open  ms-wbt-server Microsoft Terminal Services
