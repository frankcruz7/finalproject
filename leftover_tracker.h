#ifndef LEFTOVER_TRACKER_H
#define LEFTOVER_TRACKER_H

#include <vector>
#include "leftover_record.h"
#include "leftover_report.h"

class LeftoverTracker {
public:
    LeftoverTracker();

    bool AddRecord(const LeftoverRecord &record);

    bool DeleteRecord(const LeftoverRecord &record);

    std::vector<LeftoverRecord> GetAllRecords() const;

    LeftoverReport GenerateReport() const;

    void Clear();

private:
    std::vector<LeftoverRecord> records_;
};

#endif