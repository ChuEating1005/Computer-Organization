.PHONY: test
test:
	make clean
	verilator --build PipelineCPU.v --exe example_testbench.cpp -cc --trace -Wall
	./obj_dir/VSingleCycleCPU
clean:
	rm -rf obj_dir
	rm -f waveform.vcd