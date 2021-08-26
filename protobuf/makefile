SRC_DIR = .
DST_DIR = .
build: 
	g++ -std=c++11 main.cc addressbook.pb.cc `pkg-config --cflags --libs protobuf` -o main.out

build_proto:
	protoc -I=$(SRC_DIR) --cpp_out=$(DST_DIR) $(SRC_DIR)/addressbook.proto

clean:
	rm *.pb.cc *.pb.h *.out