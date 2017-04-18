#ifndef __TRACE_FILE_HH__
#define __TRACE_FILE_HH__

#include <fstream>

/* trace file, by shen */
class TraceFile {
public:
	std::ofstream memTraceFile;
	TraceFile() {
		/* open trace file, by shen */
    	memTraceFile.open("m5out-se-x86/traceFile.txt", std::ios::out);
	}

	~TraceFile() {
		memTraceFile.close();
	}
};

static TraceFile traceFile;
/* enable trace file output */
//#define TRACE

#endif