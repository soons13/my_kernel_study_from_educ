# Docker install
~~~bash
sudo apt-get install docker-ce docker-ce-cli containerd.io docker-buildx-plugin docker-compose-plugin
~~~
user를 docker group에 추가해주지 않으면 실행 시에 에러가 발생한다.
~~~bash
sudo usermod -aG docker $USER
~~~
명령 실행 후에 reboot하거나, logout 후에 다시 login하면 적용된다.

## Verify that the Docker Engine installation
~~~bash
sudo docker run hello-world
~~~

# Docker build  
 - cd docker
 - docker build -t my-kernel-study-sdk:v1 .

# docker image 조회
 - docker images

# Run Docker container 
 - docker run -it --volume="$PWD/..:/home/my-kernel-study" my-kernel-study-sdk:v1

# 또는 스크립트 실행
 - ./run_container.sh
