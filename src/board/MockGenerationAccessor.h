#ifndef MOCKGENRATIONACCESSOR_H_
#define MOCKGENRATIONACCESSOR_H_

#include "GenerationAccessor.h"
#include "gmock/gmock.h"
#include "Board.h"
#include "boost/multi_array.hpp"

namespace GameOfLife {

	class MockGenerationAccessor : public GenerationAccessor {
	 public:
	  MOCK_CONST_METHOD1(access,
		  const GridPtr(const Grid &grid));
	};

}  // namespace GameOfLife

#endif //MOCKGENRATIONACCESSOR_H_
