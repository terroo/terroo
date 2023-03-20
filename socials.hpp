#pragma once

#include <vector>
#include <memory>
#include <string>
#include <cctype>
#include <algorithm>

class Socials {
  std::string m_cutt, m_https, m_link, m_cpp;
  std::vector<std::string> m_adresses,
    m_socials, m_icons;

  protected:
    void set_socials();

  public:
    Socials(const std::string);
    void get_socials();
};
