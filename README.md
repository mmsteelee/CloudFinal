# Real Time Mulitplayer Video Game

NOTE AS OF JANRAURY 2022:

No longer supported as funding for servers is pulled

### Overview
Multiplayer video game accessable via desktop app (see client/builds) or [browser](https://mmsteelee.itch.io/cloudtankgame) .
Supports a scalable number of simultanious lobby's hosted on AWS.
Inspiration for the gameplay came from the the Wii game, Wii Tanks


### Technical Information 
**Client**

Built in unity 2019.4.9f1 game engine. Utilizes Unity [NativeWebSocket](https://github.com/endel/NativeWebSocket) client plugin to communicate with Amazon API Gateway. 

**Server**

Utilizes AWS Lambda for fast and scalable server expansion/contraction. Connects with DynamoDB to store match info such as lobby, player IDs    
