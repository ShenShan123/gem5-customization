#ifndef __TRACE_FILE_HH__
#define __TRACE_FILE_HH__

#include <fstream>

/* trace file, by shen */
class TraceFile {
public:
	std::ofstream memTraceFile;
	TraceFile() {
		/* open trace file, by shen */
    	memTraceFile.open("statistics-results/traceFile.txt", std::ios::out | std::ios::app);
	}

	~TraceFile() {
		memTraceFile.close();
	}
};

static TraceFile traceFile;

#endif