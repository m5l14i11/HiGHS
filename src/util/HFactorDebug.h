/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
/*                                                                       */
/*    This file is part of the HiGHS linear optimization suite           */
/*                                                                       */
/*    Written and engineered 2008-2021 at the University of Edinburgh    */
/*                                                                       */
/*    Available as open-source under the MIT License                     */
/*                                                                       */
/*    Authors: Julian Hall, Ivet Galabova, Qi Huangfu, Leona Gottwald    */
/*    and Michael Feldmeier                                              */
/*                                                                       */
/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
/**@file util/HFactorDebug.h
 * @brief
 */
#ifndef UTIL_HFACTORDEBUG_H_
#define UTIL_HFACTORDEBUG_H_

#include <vector>

#include "lp_data/HighsOptions.h"

using std::vector;

void debugReportRankDeficiency(
    const HighsInt call_id, const HighsInt highs_debug_level,
    const HighsLogOptions& log_options, const HighsInt numRow,
    const vector<HighsInt>& permute, const vector<HighsInt>& iwork,
    const HighsInt* baseIndex, const HighsInt rank_deficiency,
    const vector<HighsInt>& row_with_no_pivot,
    const vector<HighsInt>& col_with_no_pivot);

void debugReportRankDeficientASM(
    const HighsInt highs_debug_level, const HighsLogOptions& log_options,
    const HighsInt numRow, const vector<HighsInt>& MCstart,
    const vector<HighsInt>& MCcountA, const vector<HighsInt>& MCindex,
    const vector<double>& MCvalue, const vector<HighsInt>& iwork,
    const HighsInt rank_deficiency, const vector<HighsInt>& col_with_no_pivot,
    const vector<HighsInt>& row_with_no_pivot);

void debugReportMarkSingC(const HighsInt call_id,
                          const HighsInt highs_debug_level,
                          const HighsLogOptions& log_options,
                          const HighsInt numRow, const vector<HighsInt>& iwork,
                          const HighsInt* baseIndex);

void debugLogRankDeficiency(const HighsInt highs_debug_level,
                            const HighsLogOptions& log_options,
                            const HighsInt rank_deficiency,
                            const HighsInt basis_matrix_num_el,
                            const HighsInt invert_num_el,
                            const HighsInt& kernel_dim,
                            const HighsInt kernel_num_el, const HighsInt nwork);

void debugPivotValueAnalysis(const HighsInt highs_debug_level,
                             const HighsLogOptions& log_options,
                             const HighsInt numRow,
                             const vector<double>& UpivotValue);

#endif  // UTIL_HFACTORDEBUG_H_
