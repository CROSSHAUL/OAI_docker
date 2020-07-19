## OAISIM + free5GC with Docker.

This project is a simulation of the 5G environment of telecommunications networks. The objective of this work is to create a modular and containerized system for tests, simulations and analysis of the 5G communication network.

Therefore, this project makes use of two other major projects, Free5GCore and OpenAirInterface. In our project, the two environments communicate to generate the simulation. Everything was developed on top of the docker container platform and is orchestrated via docker compose

For more information about F5GC or OAI:
* [free5gc](https://www.free5gc.org/)
* [Open Air Interface](https://www.openairinterface.org/)

### Overview of the system structure

The image above represent the actual system and how it is placed.

<p align="center">
    <img src="readme_images/docker_containers_ilustration.png"/> 
</p>

## Project Description

In this repository, we developed an environment for simulating UE and ENB using l2NFAPI simulator from Open Air interface connected into 5g core from free5gcore. This work is on-going.

The 5G have a lot of information and metricts that are fundamental to understand the sysmtem. With that in mind, lets focous especific on the part of the system that we are adressing our problem. This repository is focousing on the eNB of OpenAirInterface.

The eNB is the hardware that is connected to the mobile phone network that communicates directly wirelessly with mobile handsets (UEs). In this case, this hardware is simulated.


The main contribution of this branch is a split on eNB. Today the eNB can be classified in three main components, that can be visualized in this figure: 


<p align="center">
    <img src="readme_images/enb.png"/> 
</p>


However, this system was made to be a monolith environment, so every structure from above run in the same computer and in the same container. This functional split is made to alleviate the overload on the main eNB computer, by grouping the RCC and RAU in one container ans spliting the RRU to another. RRU also is a light part of the system that can be redundant.


At the moment, what we have is a splited eNB to run on one computer, with all the others components.
I have not tested yet if this program is running as expected in multiples machines.


## Minimum Requirement
- Software
    - OS: Ubuntu 18.04
    - Linux kernel: 4.15.0-43-generic

- Hardware recommended
    - CPU: Intel i5
    - RAM: 8GB
    - Hard drive: 50G

## Dependencies

To execute this program you need to install:

* [Docker](https://docs.docker.com/install/)
* [Docker Compose](https://docs.docker.com/compose/install/)


## Install
Each box of project is based on a compiled free5gc image. To build this image use the follow command:

``sudo docker build -t free5gc-base .``

Each box of project is based on a compiled oaisim image. To build this image use the follow command:

``cd oaisim-base``

``sudo docker build -t oaisim-base  .``


## Running
To run all boxes and Web interface use the follow command:

``sudo docker-compose up -d``

After the docker-compose, type ``sudo docker ps``. This is the expected result:
<p align="center">
    <img src="readme_images/docker_ps.png"/> 
</p>


## Testing
To verify if everthing is running okay, you can firt check if **MongoDB** and **Web User Interface** is initialized. You can check this in your browser with the address ```http://<deployment-environment-IP-address>:3000```

The Web Application access port can be changed through the parameter ```web_application_access_port```, the default value is _3000_. The default access credentials of the Web Application are:

* User: **admin**
* Pass: **1423**

After login, you must add one UE to the web interface for the tunneling on the user equipment work properly. By defaul this code is only using one user equipement for thesting the conectivity. You can add the information bellow to the respective windows.


``IMSI: 208930000000001``

``Subscriber Key: 8baf473f2f8fd09487cccbd7097c6862``

``Operator Key: e734f8734007d6c5ce7a0508809e7e9c``

<p align="center">
    <img src="readme_images/web_page.png"/> 
</p>

Then you can proced to the ue testing. Login on the container of the UE using the following command:

`` sudo docker exec -ti oaisimwithdocker_ue bash ``

Then use ``ifconfig`` to visualize the network configuration. The expected behavior can be seen in the figure bellow. 

<p align="center">
    <img src="readme_images/ue_network_interfce.png"/> 
</p>

Now type ``` ping google.com -I 45.45.0.2 ```, we are using the comunication interface created on the web app to verify the conectivity of the UE, in this case the OAITUN_UE1 (OpenAirInterface Tunnel UE1) is located on 45.45.0.2, so the test is: ``` ping google.com -I 45.45.0.2 ```. The result should be equivalent to that shown in the next figure:


<p align="center">
    <img src="readme_images/ping_result.png"/> 
</p>


The presented results demonstrate that the UE establish an internet connection. This connection is provided through combining functionality from all Docker containers, of Free5GC components and OpenAirInterface System Emulation components. The final reasult of this implementation can be seen bellow:


<p align="center">
    <img src="readme_images/docker_containers_ilustration_2.png"/> 
</p>




