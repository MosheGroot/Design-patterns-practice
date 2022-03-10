#pragma once

#include <string>

#include <chrono>

namespace Workers
{
  /* @brief Abstract worker class
  */
  class ABase
  {
  // constructors and destructor
  protected:
    ABase(const std::string& job_name, uint64_t worktime)
      : job_name_(job_name), worktime_(worktime)
    {}

  public:
    ABase(const ABase& other)
      : job_name_(other.job_name_), worktime_(other.worktime_)
    {}

    virtual ~ABase() {}


  public:
  // factory method
    /* @brief Create `job_name` worker with `worktime` worktime day

      @param job_name   Name of the job
      @param worktime   Work time of job

      @exception  Throws if job with such name doesn't exists
    */
    static ABase*  applyWorker(const std::string_view job_name, uint64_t worktime);


  // logic
    /* @brief Start one workday
    */
    void    work(void) const;


  // fields
  private:
    std::string           job_name_;   //< name of worker's job
    std::chrono::seconds  worktime_;   //< work time in seconds

  }; //!class ABase
} //!namespace Workers
