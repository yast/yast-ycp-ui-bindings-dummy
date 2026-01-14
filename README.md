## Dummy YaST UI Bindings

[![CI](https://github.com/yast/yast-ycp-ui-bindings-dummy/actions/workflows/ci.yml/badge.svg)](https://github.com/yast/yast-ycp-ui-bindings-dummy/actions/workflows/ci.yml)
[![OBS](https://github.com/yast/yast-ycp-ui-bindings-dummy/actions/workflows/submit.yml/badge.svg)](https://github.com/yast/yast-ycp-ui-bindings-dummy/actions/workflows/submit.yml)

This is an empty (dummy) implementation of
[yast-ycp-ui-bindings](https://github.com/yast/yast-ycp-ui-bindings). The goal
is to avoid the YaST dependency on the
[libyui](https://github.com/libyui/libyui/) library in the
[Agama](https://github.com/agama-project/agama) installer which cannot use any
YaST UI.

It does not make sense for regular YaST packages.
