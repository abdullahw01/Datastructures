FROM centos:7
  
RUN yum -y clean all

RUN yum install -y \
        git \
        chrpath \
        libtool \
        lsof \
        nc \
        net-tools \
        sudo \
        tree \
        valgrind \
        vi \
        wget \
        which \
        && yum clean all

RUN yum -y groupinstall "Development Tools" \
        && yum clean all
