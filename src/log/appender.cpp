#include <fc/log/appender.hpp>
#include <fc/log/console_appender.hpp>
#include <fc/log/gelf_appender.hpp>
#include <fc/log/logger_config.hpp>


namespace fc {

   static bool reg_console_appender = log_config::register_appender<console_appender>( "console" );
   //static bool reg_file_appender = appender::register_appender<file_appender>( "file" );
   static bool reg_gelf_appender = log_config::register_appender<gelf_appender>( "gelf" );

} // namespace fc
